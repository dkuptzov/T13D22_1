#include <stdio.h>
#include <stdlib.h>

//void open_file(FILE *file);
void menu0(FILE *file, char *file_name);

int main()
{
    FILE *file = NULL;
    int flag_end = 1, menu = 0;
    char file_name[100];
    scanf("%s", file_name);
    while (flag_end != 0)
	{
		scanf("%d", &menu);
		switch (menu)
		{
		case 0:
			menu0(file, file_name);
			break;
		default:
			printf("n/a\n");
			break;
		}
	}
	return 0;
}   

// void open_file(FILE *file)
// {
//     char file_name[100];
//     scanf("%s", file_name);
//     file = fopen(file_name, "r");
// }

void menu0(FILE *file, char *file_name)
{
    char *file_in_memory;
    file = fopen(file_name, "rb");
    if (file == NULL)
	{
		printf("n/a\n");
		return;
	}
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);
    file_in_memory = (char *)malloc(file_size);
    if (file_in_memory == NULL)
    {
		printf("n/a\n");
		return;
    }

    size_t result = fread(file_in_memory, 1, file_size, file);
    if (result != (size_t)file_size)
    {
        printf("n/a\n");
        free(file_in_memory);
        fclose(file);
        return;
    }

    for (int i = 0; i < file_size; i++)
    {
        printf("%c", file_in_memory[i]);
    }

    free(file_in_memory);
    fclose(file);
}