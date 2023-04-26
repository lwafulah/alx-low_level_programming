#include "main.h"
/**
 * print_error - Prints an error message to
 * stderr and exits with status code 98
 * @message: The error message to print.
 */
void print_error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: A pointer to the ELF header.
 */

void print_elf_header(Elf64_Ehdr *header)
{
	int i;
	char *class;
	char *data;
	char *version;
	char *osabi;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		class = "ELF64";
	else
		class = "ELF32";
	printf("  Class:%s\n", class);

	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		data = "2's comp., l.end.";
	else
		data = "2's comp., big end.";
	printf("  Data:%s\n", data);

	version = "current";
	printf("  Version:%d (%s)\n", header->e_ident[EI_VERSION], version);
	printf("  OS/ABI:%d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:%d\n", header->e_type);
	printf("  Entry point address:0x%lx\n", header->e_entry);
}
/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;

	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: could not open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: could not read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: not an ELF file");
	print_elf_header(&header);

	close(fd);
	return (0);
}
