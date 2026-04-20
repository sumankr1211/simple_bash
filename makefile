FILES = main.c \
		./basic/exec.c \
		./basic/command_type.c \
		./basic/command_run.c \
		./file_system/file_system.c \
		./file_system/improved_fs.c \
		./basic/clear_screen.c \



make : 
	@gcc ${FILES} -o "suman_bash"