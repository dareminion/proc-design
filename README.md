# proc-design lab 1
Lab 1 work for NYU Proc Design VIP

The Version of cmake running is version 3.27.6

The valid targets for the command make are:
* all 
* clean
* depend
* edit_cache
* rebuild_cache
* hello_world
* hello.o
* hello.i
* hello.s

The `all` argument does the entire compilation and creates the executable for the targeted files in the .txt file.

The `hello.o` argument is the object code for hello.cpp

The `hello.i` argument is the expanded code file for hello.cpp

The `hello.s` argument is the assembly file for hello.cpp

Lab Questions:
---
* The paths are relative to the parent directory as the include and src files are the highest folders used to call the files.
* cmake is a metabuild system which means that it is used to produce ninja and make, which in turn help create the executables
* A seperate build directory is created since cmake creates a lot of files when ran, so to not clutter the main working directory, a buid directory is created.
