#!/bin/bash
# requires data/B2HHH.root-deflated and data/B2HHH.root-inflated

make result_read_mem.root-deflated.txt
make result_read_mem.root-deflated~treereader.txt
make result_read_mem.root-deflated~dataframenoht.txt
make result_read_mem.root-deflated~dataframemt.txt
make result_read_mem.root-deflated~dataframe.txt
make result_read_mem.root-inflated.txt
make result_read_mem.root-inflated~treereader.txt
make result_read_mem.root-inflated~dataframenoht.txt
make result_read_mem.root-inflated~dataframemt.txt
make result_read_mem.root-inflated~dataframe.txt
make graph_read_mem~evs.pdf
