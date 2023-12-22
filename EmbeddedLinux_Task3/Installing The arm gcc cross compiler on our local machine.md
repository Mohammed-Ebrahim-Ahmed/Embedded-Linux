### Installing The arm gcc cross compiler on our local machine :

------

Sysroot : This directory is located under the compiler directory then the same name directory of the compiler. It contains two directories which are lib and bin

- lib contain any custom library created by the user
- bin are the executable which will be executed accordingly to the target machine
- These files are really import as they will be placed  independant on each other and placed in 



Binutils: Some applications run to compile code or debug the code

- gcc to compile the code to object code
- ar to create archieve for static libraries
- ldd to know the missing indpendancies
- objdump to read object file and other usage such as generate symbol table
- strip: remove all the debugging information 