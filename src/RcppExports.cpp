// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getSynData
List getSynData(NumericVector vdata, int n, int seed, int niters, int burnin, int stride, int m, bool verbose, int in_upper);
RcppExport SEXP SyntheticData_getSynData(SEXP vdataSEXP, SEXP nSEXP, SEXP seedSEXP, SEXP nitersSEXP, SEXP burninSEXP, SEXP strideSEXP, SEXP mSEXP, SEXP verboseSEXP, SEXP in_upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vdata(vdataSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type niters(nitersSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type stride(strideSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type in_upper(in_upperSEXP);
    __result = Rcpp::wrap(getSynData(vdata, n, seed, niters, burnin, stride, m, verbose, in_upper));
    return __result;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP SyntheticData_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(rcpp_hello_world());
    return __result;
END_RCPP
}
