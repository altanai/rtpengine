/******** GENERATED FILE ********/
/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -t -E -l -c -t -I -H __csh_hash -N __csh_lookup_raw  */
/* Computed positions: -k'4' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

struct __csh_hash_lookup { char *name; int num; };
#include <string.h>
/* maximum key range = 33, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
__csh_hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 25,
      37, 25, 37, 10, 37, 37, 37, 37,  0, 37,
      37, 37, 10, 37,  0, 37,  0, 37, 37,  0,
      37,  0, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
      37, 37, 37, 37, 37, 37
    };
  return len + asso_values[(unsigned char)str[3]];
}

static
struct __csh_hash_lookup *
__csh_lookup_raw (register const char *str, register size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 17,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 16,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 36
    };

  static unsigned char lengthtable[] =
    {
       0,  0,  0,  0,  4,  5,  6,  0,  0,  9, 10,  0, 12, 13,
       4, 15, 16,  0,  0,  0, 10,  0,  0,  0, 14, 15,  0,  0,
       0,  0,  5,  6,  0,  0,  0, 10, 11
    };
  static struct __csh_hash_lookup wordlist[] =
    {
      {""}, {""}, {""}, {""},
      {"list",5},
      {"query",4},
      {"answer",2},
      {""}, {""},
      {"play DTMF",16},
      {"play media",14},
      {""},
      {"unblock DTMF",11},
      {"unblock media",13},
      {"ping",0},
      {"start recording",6},
      {"start forwarding",8},
      {""}, {""}, {""},
      {"stop media",15},
      {""}, {""}, {""},
      {"stop recording",7},
      {"stop forwarding",9},
      {""}, {""}, {""}, {""},
      {"offer",1},
      {"delete",3},
      {""}, {""}, {""},
      {"block DTMF",10},
      {"block media",12}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = __csh_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
#include "str.h"
static int __csh_lookup(const str *s) {
	struct __csh_hash_lookup *h = __csh_lookup_raw(s->s, s->len);
	if (!h)
		return -1;
	return h->num;
}
#include "control_ng.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <assert.h>

#include "obj.h"
#include "poller.h"
#include "bencode.h"
#include "log.h"
#include "cookie_cache.h"
#include "call.h"
#include "sdp.h"
#include "call_interfaces.h"
#include "socket.h"
#include "log_funcs.h"
#include "main.h"


mutex_t rtpe_cngs_lock;
GHashTable *rtpe_cngs_hash;
struct control_ng *rtpe_control_ng;

const char magic_load_limit_strings[__LOAD_LIMIT_MAX][64] = {
	[LOAD_LIMIT_MAX_SESSIONS] = "Parallel session limit reached",
	[LOAD_LIMIT_CPU] = "CPU usage limit exceeded",
	[LOAD_LIMIT_LOAD] = "Load limit exceeded",
	[LOAD_LIMIT_BW] = "Bandwidth limit exceeded",
};


static void timeval_update_request_time(struct request_time *request, const struct timeval *offer_diff) {
	// lock offers
	mutex_lock(&request->lock);

	// update min value
	if (timeval_us(&request->time_min) == 0 ||
	    timeval_cmp(&request->time_min, offer_diff) > 0) {
		timeval_from_us(&request->time_min, timeval_us(offer_diff));
	}

	// update max value
	if (timeval_us(&request->time_max) == 0 ||
	    timeval_cmp(&request->time_max, offer_diff) < 0) {
		timeval_from_us(&request->time_max, timeval_us(offer_diff));
	}

	// update avg value
	timeval_add(&request->time_avg, &request->time_avg, offer_diff);
	request->count++;

	// unlock offers
	mutex_unlock(&request->lock);
}


static void pretty_print(bencode_item_t *el, GString *s) {
	bencode_item_t *chld;
	const char *sep;

	switch (el->type) {
		case BENCODE_STRING:
			g_string_append(s, "\"");
			g_string_append_len(s, el->iov[1].iov_base, el->iov[1].iov_len);
			g_string_append(s, "\"");
			break;

		case BENCODE_INTEGER:
			g_string_append_printf(s, "%lli", el->value);
			break;

		case BENCODE_LIST:
			g_string_append(s, "[ ");
			sep = "";
			for (chld = el->child; chld; chld = chld->sibling) {
				g_string_append(s, sep);
				pretty_print(chld, s);
				sep = ", ";
			}
			g_string_append(s, " ]");
			break;

		case BENCODE_DICTIONARY:
			g_string_append(s, "{ ");
			sep = "";
			for (chld = el->child; chld; chld = chld->sibling) {
				g_string_append(s, sep);
				pretty_print(chld, s);
				g_string_append(s, ": ");
				chld = chld->sibling;
				pretty_print(chld, s);
				sep = ", ";
			}
			g_string_append(s, " }");
			break;

		default:
			abort();
	}
}

struct control_ng_stats* get_control_ng_stats(struct control_ng* c, const sockaddr_t *addr) {
	struct control_ng_stats* cur;

	mutex_lock(&rtpe_cngs_lock);
	cur = g_hash_table_lookup(rtpe_cngs_hash, addr);
	if (!cur) {
		cur = g_slice_alloc0(sizeof(struct control_ng_stats));
		cur->proxy = *addr;
		ilog(LOG_DEBUG,"Adding a proxy for control ng stats:%s", sockaddr_print_buf(addr));
		g_hash_table_insert(rtpe_cngs_hash, &cur->proxy, cur);
	}
	mutex_unlock(&rtpe_cngs_lock);
	return cur;
}

static void control_ng_incoming(struct obj *obj, str *buf, const endpoint_t *sin, char *addr,
		socket_t *ul)
{
	struct control_ng *c = (void *) obj;
	bencode_buffer_t bencbuf;
	bencode_item_t *dict, *resp;
	str cmd = STR_NULL, cookie, data, reply, *to_send, callid;
	const char *errstr, *resultstr;
	struct iovec iov[3];
	unsigned int iovlen;
	GString *log_str;
	struct timeval cmd_start, cmd_stop, cmd_process_time;
	struct control_ng_stats* cur = get_control_ng_stats(c,&sin->address);

	str_chr_str(&data, buf, ' ');
	if (!data.s || data.s == buf->s) {
		ilog(LOG_WARNING, "Received invalid data on NG port (no cookie) from %s: " STR_FORMAT_M,
				addr, STR_FMT_M(buf));
		return;
	}

	int ret = bencode_buffer_init(&bencbuf);
	assert(ret == 0);
	(void) ret;
	resp = bencode_dictionary(&bencbuf);
	assert(resp != NULL);

	cookie = *buf;
	cookie.len -= data.len;
	*data.s++ = '\0';
	data.len--;

	errstr = "Invalid data (no payload)";
	if (data.len <= 0)
		goto err_send;

	to_send = cookie_cache_lookup(&c->cookie_cache, &cookie);
	if (to_send) {
		ilog(LOG_INFO, "Detected command from %s as a duplicate", addr);
		resp = NULL;
		goto send_only;
	}

	dict = bencode_decode_expect_str(&bencbuf, &data, BENCODE_DICTIONARY);
	errstr = "Could not decode dictionary";
	if (!dict)
		goto err_send;

	bencode_dictionary_get_str(dict, "command", &cmd);
	errstr = "Dictionary contains no key \"command\"";
	if (!cmd.s)
		goto err_send;

	bencode_dictionary_get_str(dict, "call-id", &callid);
	log_info_str(&callid);

	ilog(LOG_INFO, "Received command '"STR_FORMAT"' from %s", STR_FMT(&cmd), addr);

	if (get_log_level() >= LOG_DEBUG) {
		log_str = g_string_sized_new(256);
		g_string_append_printf(log_str, "Dump for '"STR_FORMAT"' from %s: %s", STR_FMT(&cmd), addr,
				rtpe_config.common.log_mark_prefix);
		pretty_print(dict, log_str);
		g_string_append(log_str, rtpe_config.common.log_mark_suffix);
		ilog(LOG_DEBUG, "%.*s", (int) log_str->len, log_str->str);
		g_string_free(log_str, TRUE);
	}

	// XXX do the strcmp's only once
	errstr = NULL;
	resultstr = "ok";

	// start command timer
	gettimeofday(&cmd_start, NULL);

	int cmdcode = __csh_lookup(&cmd);

	switch (cmdcode) {
		case 0:
			resultstr = "pong";
			g_atomic_int_inc(&cur->ping);
			break;
		case 1:
			errstr = call_offer_ng(dict, resp, addr, sin);
			g_atomic_int_inc(&cur->offer);
			break;
		case 2:
			errstr = call_answer_ng(dict, resp);
			g_atomic_int_inc(&cur->answer);
			break;
		case 3:
			errstr = call_delete_ng(dict, resp);
			g_atomic_int_inc(&cur->delete);
			break;
		case 4:
			errstr = call_query_ng(dict, resp);
			g_atomic_int_inc(&cur->query);
			break;
		case 5:
			errstr = call_list_ng(dict, resp);
			g_atomic_int_inc(&cur->list);
			break;
		case 6:
			errstr = call_start_recording_ng(dict, resp);
			g_atomic_int_inc(&cur->start_recording);
			break;
		case 7:
			errstr = call_stop_recording_ng(dict, resp);
			g_atomic_int_inc(&cur->stop_recording);
			break;
		case 8:
			errstr = call_start_forwarding_ng(dict, resp);
			g_atomic_int_inc(&cur->start_forwarding);
			break;
		case 9:
			errstr = call_stop_forwarding_ng(dict, resp);
			g_atomic_int_inc(&cur->stop_forwarding);
			break;
		case 10:
			errstr = call_block_dtmf_ng(dict, resp);
			g_atomic_int_inc(&cur->block_dtmf);
			break;
		case 11:
			errstr = call_unblock_dtmf_ng(dict, resp);
			g_atomic_int_inc(&cur->unblock_dtmf);
			break;
		case 12:
			errstr = call_block_media_ng(dict, resp);
			g_atomic_int_inc(&cur->block_media);
			break;
		case 13:
			errstr = call_unblock_media_ng(dict, resp);
			g_atomic_int_inc(&cur->unblock_media);
			break;
		case 14:
			errstr = call_play_media_ng(dict, resp);
			g_atomic_int_inc(&cur->play_media);
			break;
		case 15:
			errstr = call_stop_media_ng(dict, resp);
			g_atomic_int_inc(&cur->stop_media);
			break;
		case 16:
			errstr = call_play_dtmf_ng(dict, resp);
			g_atomic_int_inc(&cur->play_dtmf);
			break;
		default:
			errstr = "Unrecognized command";
	}

	// stop command timer
	gettimeofday(&cmd_stop, NULL);
	//print command duration
	timeval_from_us(&cmd_process_time, timeval_diff(&cmd_stop, &cmd_start));

	if (errstr)
		goto err_send;

	bencode_dictionary_add_string(resp, "result", resultstr);

	// update interval statistics
	switch (cmdcode) {
		case 1:
			atomic64_inc(&rtpe_statsps.offers);
			timeval_update_request_time(&rtpe_totalstats_interval.offer, &cmd_process_time);
			break;
		case 2:
			atomic64_inc(&rtpe_statsps.answers);
			timeval_update_request_time(&rtpe_totalstats_interval.answer, &cmd_process_time);
			break;
		case 3:
			atomic64_inc(&rtpe_statsps.deletes);
			timeval_update_request_time(&rtpe_totalstats_interval.delete, &cmd_process_time);
			break;
	}

	goto send_resp;

err_send:

	if (errstr < magic_load_limit_strings[0] || errstr > magic_load_limit_strings[__LOAD_LIMIT_MAX-1]) {
		ilog(LOG_WARNING, "Protocol error in packet from %s: %s [" STR_FORMAT_M "]",
				addr, errstr, STR_FMT_M(&data));
		bencode_dictionary_add_string(resp, "result", "error");
		bencode_dictionary_add_string(resp, "error-reason", errstr);
		g_atomic_int_inc(&cur->errors);
		cmd = STR_NULL;
	}
	else {
		bencode_dictionary_add_string(resp, "result", "load limit");
		bencode_dictionary_add_string(resp, "message", errstr);
	}

send_resp:
	bencode_collapse_str(resp, &reply);
	to_send = &reply;

	if (cmd.s) {
		ilog(LOG_INFO, "Replying to '"STR_FORMAT"' from %s (elapsed time %llu.%06llu sec)", STR_FMT(&cmd), addr, (unsigned long long)cmd_process_time.tv_sec, (unsigned long long)cmd_process_time.tv_usec);

		if (get_log_level() >= LOG_DEBUG) {
			dict = bencode_decode_expect_str(&bencbuf, to_send, BENCODE_DICTIONARY);
			if (dict) {
				log_str = g_string_sized_new(256);
				g_string_append_printf(log_str, "Response dump for '"STR_FORMAT"' to %s: %s",
						STR_FMT(&cmd), addr,
						rtpe_config.common.log_mark_prefix);
				pretty_print(dict, log_str);
				g_string_append(log_str, rtpe_config.common.log_mark_suffix);
				ilog(LOG_DEBUG, "%.*s", (int) log_str->len, log_str->str);
				g_string_free(log_str, TRUE);
			}
		}
	}

send_only:
	iovlen = 3;

	iov[0].iov_base = cookie.s;
	iov[0].iov_len = cookie.len;
	iov[1].iov_base = " ";
	iov[1].iov_len = 1;
	iov[2].iov_base = to_send->s;
	iov[2].iov_len = to_send->len;

	socket_sendiov(ul, iov, iovlen, sin);

	if (resp)
		cookie_cache_insert(&c->cookie_cache, &cookie, &reply);
	else
		free(to_send);

	goto out;

out:
	bencode_buffer_free(&bencbuf);
	log_info_clear();
}



struct control_ng *control_ng_new(struct poller *p, endpoint_t *ep, unsigned char tos) {
	struct control_ng *c;

	if (!p)
		return NULL;

	c = obj_alloc0("control_ng", sizeof(*c), NULL);

	cookie_cache_init(&c->cookie_cache);
	c->udp_listeners[0].fd = -1;
	c->udp_listeners[1].fd = -1;

	if (udp_listener_init(&c->udp_listeners[0], p, ep, control_ng_incoming, &c->obj))
		goto fail2;
	if (tos)
		set_tos(&c->udp_listeners[0],tos);
	if (ipv46_any_convert(ep)) {
		if (udp_listener_init(&c->udp_listeners[1], p, ep, control_ng_incoming, &c->obj))
			goto fail2;
		if (tos)
			set_tos(&c->udp_listeners[1],tos);
	}
	return c;

fail2:
	obj_put(c);
	return NULL;

}


void control_ng_init() {
	mutex_init(&rtpe_cngs_lock);
	rtpe_cngs_hash = g_hash_table_new(g_sockaddr_hash, g_sockaddr_eq);
}