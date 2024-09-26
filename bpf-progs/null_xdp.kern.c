#include <linux/bpf.h>
#include <linux/types.h>
#include <bpf/bpf_helpers.h>

SEC("xdp")
int trigger_xdp_prog(struct xdp_md *ctx) {
    return XDP_PASS;
}

char LISENSE[] SEC("license") = "Dual BSD/GPL";