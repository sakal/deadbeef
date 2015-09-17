#include <stdio.h>
#include "log.h"

const Widget * log_widget = NULL;

void
ddb_log (const char * msg)
{
    if (!log_widget) {
        log_widget = gtkui_create_log_window
    }
    fprintf(sdterr, msg);
}

