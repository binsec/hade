#include <stdio.h>
#include <string.h>

char input[256];
char output[256];

void my_strcpy(char *dst, char *src)
{
        int i = 0;
        while (dst[i] = src[i]) { i++; }
}

char grub_getkey()
{
        static int p = 0;
        char k = input[p++];
        if (k == 0) return '\n';
}

void grub_printf(char *str)
{
        static int p = 0;
        int i = 0;
        while (output[p] = str[i]) { p++; i++; }
}

void printf_char(char c)
{
        char buf[2];
        buf[0] = c;
        buf[1] = 0;
        grub_printf(buf);
}

static inline int
grub_isprint (int c)
{
        return (c >= ' ' && c <= '~');
}


static int
grub_username_get (char buf[], unsigned buf_size)
{
  unsigned cur_len = 0;
  int key;

  while (1)
    {
      key = grub_getkey ();
      if (key == '\n' || key == '\r')
        break;

      if (key == '\e')
        {
          cur_len = 0;
          break;
        }

      if (key == '\b')  // Does not checks underflows !!
        {
          cur_len--; // Integer underflow !!
          grub_printf ("\b");
          continue;
        }

      if (!grub_isprint (key))
        continue;

      if (cur_len + 2 < buf_size)
        {
          buf[cur_len++] = key; // Off-by-two !!
          printf_char (key);
        }
    }

  
//  grub_memset( buf + cur_len, 0, buf_size - cur_len); // Out of bounds overwrite

  grub_printf ("\n");
//  grub_refresh ();

  return (key != '\e');
}


int main(int argc, char *argv[])
{
        struct {
                int  canary;
                char buf[16];
        } state;

		int len = strlen(argv[1]);
		if ( len == 0 ) {
			char* tmp = argv[1];
        	my_strcpy(input, tmp);
		} else {
			char tmp[32];
			memset(tmp,0,len);
			for (int it=0; it<argv[1][0]; it++) {
				tmp[0]++; 
			}
			
			for (int it=0; it<argv[1][1]; it++) {
				tmp[1]++; 
			}

			for (int it=0; it<argv[1][2]; it++) {
				tmp[2]++; 
			}

			if (len > 3 ) {
				argv[1] += 3;
				strcat(tmp,argv[1]);
			}
        	my_strcpy(input, tmp);
		}

        state.canary = 0;
        grub_username_get(state.buf, 16);
        if (state.canary != 0) {
                printf("This gets interesting!\n");
        }
        printf("%s", output);
        printf("canary=%08x\n", state.canary);
}

