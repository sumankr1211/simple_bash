FILES = main.c \
		./basic/exec.c \
		./basic/command_type.c \
		./basic/command_run.c \
		./file_system/file_system.c \
		



make : 
	@gcc ${FILES} -o "suman_bash"