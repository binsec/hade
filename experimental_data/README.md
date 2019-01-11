# Killing Symbolic Deobfuscation For Free

To perform the benchmark we used [Tigress C obfuscator](http://tigress.cs.arizona.edu/) and [KLEE](https://klee.github.io) symbolic execution engine.

# Set Up

Tigress C can be downloaded on the official website.
The fastest way to get a working environment with KLEE is the [ready-to-use docker](http://klee.github.io/docker/). Just follow installation procedures.
Sources and obfuscated programs (from Split and For) are available here. Format available are C code and LLVM bytecode (.bc)

# Obfuscate with Tigress C

We used Virtualisation, Flatten, EncodeArithmetics and combinations of these transformations. Examples:

```
$ tigress --Transform=Virtualize --Functions=main $file
```
```
$ tigress --Transform=EncodeArithmetics --Functions=main $file
```

Flatten transformation needs the initiation of opaque predicates even if we do not use any afterwards
```
$ tigress --Transform=InitOpaque --Functions=main --Transform=Flatten --Functions=main $file
```

# Run Benchmark

To replay benchmarks you just have to execute `run_klee.sh` in the environment where klee is installed. No parameter is needed. Please edit and comment the code to make any changes about what programs you want to symbocally execute. By default every programs will be executed which will take a lot of time.




