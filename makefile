FILES = main.c \
		./basic/exec.c \
		./basic/command_type.c \
		./basic/command_run.c



make : 
	@gcc ${FILES} -o "suman_bash"