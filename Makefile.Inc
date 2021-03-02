
DIR = $(dir $(lastword $(MAKEFILE_LIST)))/src

SOURCES = $(DIR)/multilog.c
SOURCES += $(DIR)/alloc.c
SOURCES += $(DIR)/timestamp.c
SOURCES += $(DIR)/coe.c
SOURCES += $(DIR)/buffer.c
SOURCES += $(DIR)/sig.c
SOURCES += $(DIR)/match.c
SOURCES += $(DIR)/error_str.c
SOURCES += $(DIR)/error.c
SOURCES += $(DIR)/iopause.c
SOURCES += $(DIR)/deepsleep.c
SOURCES += $(DIR)/taia_add.c
SOURCES += $(DIR)/taia_approx.c
SOURCES += $(DIR)/taia_frac.c
SOURCES += $(DIR)/taia_less.c
SOURCES += $(DIR)/taia_now.c
SOURCES += $(DIR)/taia_pack.c
SOURCES += $(DIR)/taia_sub.c
SOURCES += $(DIR)/taia_uint.c
SOURCES += $(DIR)/buffer_0.c
SOURCES += $(DIR)/buffer_1.c
SOURCES += $(DIR)/buffer_2.c
SOURCES += $(DIR)/buffer_get.c
SOURCES += $(DIR)/buffer_put.c
SOURCES += $(DIR)/buffer_read.c
SOURCES += $(DIR)/buffer_write.c
SOURCES += $(DIR)/open_append.c
SOURCES += $(DIR)/open_read.c
SOURCES += $(DIR)/open_trunc.c
SOURCES += $(DIR)/open_write.c
SOURCES += $(DIR)/sig_block.c
SOURCES += $(DIR)/sig_catch.c
SOURCES += $(DIR)/sig_pause.c
SOURCES += $(DIR)/strerr_die.c
SOURCES += $(DIR)/strerr_sys.c
SOURCES += $(DIR)/fd_copy.c
SOURCES += $(DIR)/fd_move.c
SOURCES += $(DIR)/str_chr.c
SOURCES += $(DIR)/str_diff.c
SOURCES += $(DIR)/str_len.c
SOURCES += $(DIR)/str_start.c
SOURCES += $(DIR)/wait_nohang.c
SOURCES += $(DIR)/wait_pid.c
SOURCES += $(DIR)/seek_set.c
SOURCES += $(DIR)/scan_ulong.c
SOURCES += $(DIR)/byte_chr.c
SOURCES += $(DIR)/byte_copy.c
SOURCES += $(DIR)/byte_cr.c
SOURCES += $(DIR)/byte_diff.c
SOURCES += $(DIR)/byte_rchr.c
SOURCES += $(DIR)/lock_ex.c
SOURCES += $(DIR)/lock_exnb.c
SOURCES += $(DIR)/tai_now.c
SOURCES += $(DIR)/tai_pack.c
SOURCES += $(DIR)/tai_sub.c
SOURCES += $(DIR)/tai_unpack.c


FLAGS = -Wno-format-truncation
FLAGS += -Wimplicit
FLAGS += -Wunused
FLAGS += -Wcomment
FLAGS += -Wchar-subscripts
FLAGS += -Wuninitialized
FLAGS += -Wshadow
FLAGS += -Wcast-qual
FLAGS += -Wcast-align
FLAGS += -Wwrite-strings
FLAGS += -O2


pug3_logger:
	arm-linux-gnueabi-gcc $(FLAGS) $(SOURCES) -lpthread -o multilog
	
	
	
	
	
	

