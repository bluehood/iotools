Benchmark for reading and writing a typical HEP ntuple with several libraries / data formats.

## The data

The dataset can be found here: https://cernbox.cern.ch/index.php/s/bWn6oeSUyvtHP4t
Starting from the B2HHH.root file (inflated/uncompressed, equivalent to B2HHH.root-inflated), other formats can be created with

```
./lhcb_opendata -i data/B2HHH.root -o root-lz4 (other supported formats: root-inflated, root-lzma, root-deflated)
```

## The plot

To generate the plot, copy the data in a `data` subdirectory, make sure you have both B2HHH.root-inflated and 
B2HHH.root-deflated, then setup the desired ROOT environment and execute
```
bash make_plot.sh
```

## Running single benchmarks
To run a benchmark, make the corresponding `result_...txt` targets, e.g.

```
make result_read_mem.root(-lz4,-deflated,-inflated,-lzma)[~dataframe,~dataframemt,~dataframenoht,~treereader].txt
```

No `~XXX` section triggers a run with `TTree+SetBranchAddress`.

Plots can be created with:

```
make graph_read_mem~evs.pdf  # show events per second on the y axis
make graph_read_mem~mbs.pdf  # show MB/s on the y axis
```

