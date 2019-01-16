# Secret-Finding Oriented Challenge

In this folder there are nine programs containing a secret - a message "Success!" is printed if the right path is taken.
Six of these programs are modified versions of dataset from [Banescu et al.](https://github.com/tum-i22/obfuscation-benchmarks) 3 are non-cryptographic hash functions.

The [src](https://github.com/binsec/hade/tree/master/secret_challenge/src) folder contains the original C source code of each program.

In the [for5](https://github.com/binsec/hade/tree/master/secret_challenge/for5) folder you can find the modified programs (and their associated binary) obfuscated with five repetitions of the byte-wise for pattern.

In the [virtualization](https://github.com/binsec/hade/tree/master/secret_challenge/virtualization) folder you can find the modified programs (and their associated binary) obfuscated with one-level of virtualization using [Tigress C](http://tigress.cs.arizona.edu/).

Finally, the [hardened](https://github.com/binsec/hade/tree/master/secret_challenge/hardened) folder contains fully obfuscated binaries with path-oriented patterns as well as virtualization and arithmetic encoding (using Tigress C).
