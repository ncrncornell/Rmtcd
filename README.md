# Synthesizing Truncated Count Data for Confidentiality (Rmtcd)

`mtcd`  is a standalone  C++ implementation of the statistical model proposed in "Synthesizing Truncated Count Data for Confidentiality" ([Github copy](https://github.com/labordynamicsinstitute/flow-synthesis/blob/master/doc/NTTS2013Paper123.pdf)).  

This repository contains a R wrapper around the original source code, with minor generalizations.

## Installation

In R, run the following command:

```R
library(devtools)
install_github(“ncrncornell/Rmtcd”)
```
then run
```R
library(SyntheticData)
```
and you can call `getSyntheticData()` function .

If `library(devtools)` doesn’t work, you’ll need to install  the library:

```R
install.packages(“devtools”)
```

On Linux, a frequent error is failure of the `install_github()` function. Workaround (and more generic) is
```R
install_git("https://github.com/ncrncornell/Rmtcd")
```
That always works.

## Contributors
In order of contribution:
* Yuxin (Charley) Chen (yc769@cornell.edu),
* Hautahi Kingi (hrk55@cornell.edu),
* Alice Chou (aec247@cornell.edu),
* Lars Vilhuber (lars.vilhuber@cornell.edu).
Please direct queries to the [Labor Dynamics Institute](mailto:ldi@cornell.edu)


The original source code in C++ is available at http://sites.duke.edu/tcrn/research-projects/downloadable-software/ and at https://github.com/labordynamicsinstitute/flow-synthesis.

This package is maintained at https://github.com/ncrncornell/Rmtcd .

## Funding
Development of the original code was supported under the [NSF grant SES-1131897](http://www.nsf.gov/awardsearch/showAward?AWD_ID=1131897) ([NCRN Duke-NISS](http://sites.duke.edu/tcrn/nsf-ncrn-program/)). Development of the R wrapper was supported under [NSF Grant SES-1131848](http://www.nsf.gov/awardsearch/showAward?AWD_ID=1131848) to Cornell University ([NCRN Cornell](https://www.ncrn.cornell.edu/))
