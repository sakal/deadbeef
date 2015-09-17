#ifndef DDB_LOG_H
#define DDB_LOG_H

typedef struct {
    GtkWidget * window;
    GtkWidget * log;
    GtkTextBuffer * buffer;
    GtkTextIter * iter;
} ddb_log_t;

void
ddb_log (const char * msg);
#endif
