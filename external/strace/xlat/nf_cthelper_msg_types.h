/* Generated by ./xlat/gen.sh from ./xlat/nf_cthelper_msg_types.in; do not edit. */
#if !(defined(NFNL_MSG_CTHELPER_NEW) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_NEW) && HAVE_DECL_NFNL_MSG_CTHELPER_NEW))
# define NFNL_MSG_CTHELPER_NEW 0
#endif
#if !(defined(NFNL_MSG_CTHELPER_GET) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_GET) && HAVE_DECL_NFNL_MSG_CTHELPER_GET))
# define NFNL_MSG_CTHELPER_GET 1
#endif
#if !(defined(NFNL_MSG_CTHELPER_DEL) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_DEL) && HAVE_DECL_NFNL_MSG_CTHELPER_DEL))
# define NFNL_MSG_CTHELPER_DEL 2
#endif

#ifdef IN_MPERS

# error static const struct xlat nf_cthelper_msg_types in mpers mode

#else

static
const struct xlat nf_cthelper_msg_types[] = {
 XLAT(NFNL_MSG_CTHELPER_NEW),
 XLAT(NFNL_MSG_CTHELPER_GET),
 XLAT(NFNL_MSG_CTHELPER_DEL),
 XLAT_END
};

#endif /* !IN_MPERS */