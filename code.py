Cache=3
SimpleOpts=4

def connectMemSideBus(self, bus):
     self.mem_side = bus.cpu_side_ports
class L3Cache(Cache):
    # Default parameters
    size = '256kB'
    assoc = 8
    tag_latency = 20
    data_latency = 20
    response_latency = 20
    mshrs = 20
    tgts_per_mshr = 12
 
    SimpleOpts.add_option('--l3_size', help="L3 cache size. Default: %s" % size)
 
    def __init__(self, opts=None):
        super(L3Cache, self).__init__()
        if not opts or not opts.l3_size:
            return
        self.size = opts.l3_size
 
    def connectCPUSideBus(self, bus):
        self.cpu_side = bus.mem_side_ports
 
    def connectMemSideBus(self, bus):
        self.mem_side = bus.cpu_side_ports
