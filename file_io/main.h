#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void err_exit_with_filename(int code, const char *message, const char *filename);
void err_exit_with_fd(int code, const char *message, int fd);

#endif
