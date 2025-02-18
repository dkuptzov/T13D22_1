#include <stdio.h>
#include <stdlib.h>
//void open_file(FILE *file);
void menu0(FILE *file, char *file_name);
int compare(const void *a, const void *b);

struct MyStruct{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int status;
    int code;
};

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
        case -1:
            flag_end = 0;
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
    //char *file_in_memory;
    struct MyStruct data;
    file = fopen(file_name, "rb");
    if (file == NULL)
	{
		printf("n/a\n");
		return;
	}

    int n = 0;
    while (fread(&data, sizeof(struct MyStruct), 1, file) == 1) n++;
    printf("%d", n);
    // int n = sizeof(data) / sizeof(data[0]);

    qsort(&data, n, sizeof(struct MyStruct), compare);

    while (fread(&data, sizeof(struct MyStruct), 1, file) == 1) {
        printf("%d %d %d %d %d %d %d %d\n", data.year, data.month, data.day, data.hour, data.minute, 
        data.second, data.status, data.code);
    }
    //printf("%d", data.year);


    // fseek(file, 0, SEEK_END);
    // long file_size = ftell(file);
    // rewind(file);
    // file_in_memory = (char *)malloc(file_size);
    // if (file_in_memory == NULL)
    // {
	// 	printf("n/a\n");
	// 	return;
    // }
    // size_t result = fread(file_in_memory, 1, file_size, file);
    // if (result != (size_t)file_size)
    // {
    //     printf("n/a\n");
    //     free(file_in_memory);
    //     fclose(file);
    //     return;
    // }
    // for (int i = 0; i < file_size; i++)
    // {
    //     printf("%c", file_in_memory[i]);
    // }
    // free(file_in_memory);
    fclose(file);
}

int compare(const void *a, const void *b) {
    const struct MyStruct *data1 = (const struct MyStruct *)a;
    const struct MyStruct *data2 = (const struct MyStruct *)b;

    // Сравнение по полю year
    return (data1->year - data2->year);
}
