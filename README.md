# Libft_Makefile
Libft, Makefile, Includes and Srcs folder already coded and ready for you to start your new project!

1. In the includes you just need to change the name of the include.h file to your project name and the

 			#ifndef INCLUDE_H
			# define INCLUDE_H

	inside the file.
	(Switch the include part to your program name but keep the _H at the end)
3. The Libft already has get_next_line and ft_printf functions included.
4. In the Makefile you need to:   
- Give your program a name. (line 13)
- If you want to create subfolders on the src folder you just need to uncomment:

		src/*/*.c
	(on line 17)
- WARNING!!!  
        Every project that you deliver needs to compile the OBJS and then compile the program using the OBJS so to do that
        you need to switch

		"$(SRCS)"

	with

		"$(OBJS)"

	(on line 29 and 31.)


	You can switch it stright away I didn't because I
	don't like to see my Makefile creating objects while I am testing. 
	(if you switch if staright away it will be creating a *.o file everytime you compile)


	You also need to add all SRCS manuly otherwise your program will only be creating a *.o file instead of compiling the .c files to .o
	To do that use the command:

		"echo src/*.c src/*/*.c"

	inside your project folder and it will give you the output of every .c file and
	their location. 
	Paste that on line 17 after "SRCS ="


I Hope this helps you guys learning how a Makefile works and also saves you some time!
LYall!!! <3
