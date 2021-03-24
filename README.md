# myfind

# Description :
A mini implementation of find command that lists all files and directories.

# Compilation :

The compilation is done using "make", for now there are 3 rules available :

- all   : Compile the project


- clean : Remove all files created by other rules


Options:
-d : myfind process each directory’s content before the directory itself. This option follows the
BSD-family find, and not GNU-find, where -d is only an expression (not an option). By default, myfind
visits directories in pre-order (before their contents).

We have tried to implement the others find options but they are not fully functional

Examples :

./create_test_resources.sh creates a directory with file architecture so we can test 
./cleanup_test_resources.sh remove all the test files

make
./myfind
./myfind -d test_folder
./myfind -H . test_folder/foo

make clean






#Author :

DA CUNHA Jason,ABDELKERIM Ibrahim,SOTODJI Komi
