/* Generated by ./xlat/gen.sh from ./xlat/fan_event_flags.in; do not edit. */
#if !(defined(FAN_ACCESS) || (defined(HAVE_DECL_FAN_ACCESS) && HAVE_DECL_FAN_ACCESS))
# define FAN_ACCESS 0x00000001
#endif
#if !(defined(FAN_MODIFY) || (defined(HAVE_DECL_FAN_MODIFY) && HAVE_DECL_FAN_MODIFY))
# define FAN_MODIFY 0x00000002
#endif
#if !(defined(FAN_CLOSE_WRITE) || (defined(HAVE_DECL_FAN_CLOSE_WRITE) && HAVE_DECL_FAN_CLOSE_WRITE))
# define FAN_CLOSE_WRITE 0x00000008
#endif
#if !(defined(FAN_CLOSE_NOWRITE) || (defined(HAVE_DECL_FAN_CLOSE_NOWRITE) && HAVE_DECL_FAN_CLOSE_NOWRITE))
# define FAN_CLOSE_NOWRITE 0x00000010
#endif
#if !(defined(FAN_OPEN) || (defined(HAVE_DECL_FAN_OPEN) && HAVE_DECL_FAN_OPEN))
# define FAN_OPEN 0x00000020
#endif
#if !(defined(FAN_Q_OVERFLOW) || (defined(HAVE_DECL_FAN_Q_OVERFLOW) && HAVE_DECL_FAN_Q_OVERFLOW))
# define FAN_Q_OVERFLOW 0x00004000
#endif
#if !(defined(FAN_OPEN_PERM) || (defined(HAVE_DECL_FAN_OPEN_PERM) && HAVE_DECL_FAN_OPEN_PERM))
# define FAN_OPEN_PERM 0x00010000
#endif
#if !(defined(FAN_ACCESS_PERM) || (defined(HAVE_DECL_FAN_ACCESS_PERM) && HAVE_DECL_FAN_ACCESS_PERM))
# define FAN_ACCESS_PERM 0x00020000
#endif
#if !(defined(FAN_ONDIR) || (defined(HAVE_DECL_FAN_ONDIR) && HAVE_DECL_FAN_ONDIR))
# define FAN_ONDIR 0x40000000
#endif
#if !(defined(FAN_EVENT_ON_CHILD) || (defined(HAVE_DECL_FAN_EVENT_ON_CHILD) && HAVE_DECL_FAN_EVENT_ON_CHILD))
# define FAN_EVENT_ON_CHILD 0x08000000
#endif

#ifdef IN_MPERS

# error static const struct xlat fan_event_flags in mpers mode

#else

static
const struct xlat fan_event_flags[] = {
 XLAT(FAN_ACCESS),
 XLAT(FAN_MODIFY),
 XLAT(FAN_CLOSE_WRITE),
 XLAT(FAN_CLOSE_NOWRITE),
 XLAT(FAN_OPEN),
 XLAT(FAN_Q_OVERFLOW),
 XLAT(FAN_OPEN_PERM),
 XLAT(FAN_ACCESS_PERM),
 XLAT(FAN_ONDIR),
 XLAT(FAN_EVENT_ON_CHILD),
 XLAT_END
};

#endif /* !IN_MPERS */