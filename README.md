# Libft

My implementation of some of the Standard C Library functions as well as some additional ones.

###What is libft?

Libft is the first project of the [42][1] curriculum. It requires us to re-create some standard C library functions, including some additional ones that will be useful for the rest of the program. 

Disclaimer: *Although this seems like reinventing the wheel, 42 makes includes this project in the curriculum for us to gain a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use most standard functions for our projects, so we have to keep growing this library with our own functions as we progress.*

### What is included?

The various functions included in the libft project can be divided up into four sections, as described in the [project instructions][2].

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.


Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_numofdigits
bzero		| ft_memdel		| ft_lstdelone	| ft_countword 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_isspace   
memchr		| ft_striter	| ft_lstmap		| ft_isnegative
memcmp		| ft_striteri	|
strlen		| ft_strmap		|
strdup		| ft_strmapi	|	
strcpy		| ft_strequ		|
strncpy		| ft_strnequ	|
strcat		| ft_strsub		|
strlcat		| ft_strjoin	|
strchr		| ft_strtrim	|
strrchr		| ft_strsplit	|
strstr		| ft_itoa		|
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|
toupper		|
tolower		|

### How does it work?

The goal is to create from the source files a library called *libft.a* that I can later use for any other projects at 42.

To create that library, first clone this repo and **cd** into the directory. Then call make:

	git clone https://github.com/beasleyz/42_libft libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).

Now to clean up the directory, call `make clean` to remove the object files. This will make it easier to view the source files within the directory.

### How do I try it out?

I added an example file called example.c that uses the function ft_putstr. Try it out to see what it outputs.

If you try to compile it with gcc using `gcc example.c` you will get an undefined symbol error for ft_putstr.

You have to tell the file where your library resides and which library it is using:

		gcc -L. -lft example.c

-L takes the path to your library. It is in the current directory in this case, illustrated by the `.`

-l takes the name of your library. This is the set of characters that come after lib in your library name. (ie. "ft")

That's it. Now run it using `./a.out`

You can edit example.c and you can also try writing your own programs using my libft. 

Enjoy :)

### Example usage

My project [get_next_line](https://github.com/beasleyz/42_GetNextLine) relies heavily on my libft functions and is a good example of the usage of this project. 

As I continue in the 42 curriculum, I will add more projects to this section for reference.


[1]: http://42.us.org "42 USA"
[2]: https://github.com/beasleyz/42_libft/blob/master/libft.en.pdf "libft PDF"
