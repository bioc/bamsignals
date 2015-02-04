// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getMatrix
Rcpp::IntegerMatrix getMatrix(Rcpp::RObject csig, int idx);
RcppExport SEXP bamsignals_getMatrix(SEXP csigSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::RObject >::type csig(csigSEXP );
        Rcpp::traits::input_parameter< int >::type idx(idxSEXP );
        Rcpp::IntegerMatrix __result = getMatrix(csig, idx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getVector
Rcpp::IntegerVector getVector(Rcpp::RObject csig, int idx);
RcppExport SEXP bamsignals_getVector(SEXP csigSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::RObject >::type csig(csigSEXP );
        Rcpp::traits::input_parameter< int >::type idx(idxSEXP );
        Rcpp::IntegerVector __result = getVector(csig, idx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getSubset
Rcpp::List getSubset(Rcpp::RObject csig, Rcpp::IntegerVector idxs);
RcppExport SEXP bamsignals_getSubset(SEXP csigSEXP, SEXP idxsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::RObject >::type csig(csigSEXP );
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type idxs(idxsSEXP );
        Rcpp::List __result = getSubset(csig, idxs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// asList
Rcpp::List asList(Rcpp::RObject csig);
RcppExport SEXP bamsignals_asList(SEXP csigSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::RObject >::type csig(csigSEXP );
        Rcpp::List __result = asList(csig);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fastWidth
Rcpp::IntegerVector fastWidth(Rcpp::RObject csig);
RcppExport SEXP bamsignals_fastWidth(SEXP csigSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::RObject >::type csig(csigSEXP );
        Rcpp::IntegerVector __result = fastWidth(csig);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// pileup_core
List pileup_core(RObject gr, std::string bampath, int mapqual = 0, int binsize = 1, int shift = 0, bool ss = false, bool pe = false, bool pe_mid = false, int maxfraglength = 1000, int maxgap = 16385);
RcppExport SEXP bamsignals_pileup_core(SEXP grSEXP, SEXP bampathSEXP, SEXP mapqualSEXP, SEXP binsizeSEXP, SEXP shiftSEXP, SEXP ssSEXP, SEXP peSEXP, SEXP pe_midSEXP, SEXP maxfraglengthSEXP, SEXP maxgapSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type gr(grSEXP );
        Rcpp::traits::input_parameter< std::string >::type bampath(bampathSEXP );
        Rcpp::traits::input_parameter< int >::type mapqual(mapqualSEXP );
        Rcpp::traits::input_parameter< int >::type binsize(binsizeSEXP );
        Rcpp::traits::input_parameter< int >::type shift(shiftSEXP );
        Rcpp::traits::input_parameter< bool >::type ss(ssSEXP );
        Rcpp::traits::input_parameter< bool >::type pe(peSEXP );
        Rcpp::traits::input_parameter< bool >::type pe_mid(pe_midSEXP );
        Rcpp::traits::input_parameter< int >::type maxfraglength(maxfraglengthSEXP );
        Rcpp::traits::input_parameter< int >::type maxgap(maxgapSEXP );
        List __result = pileup_core(gr, bampath, mapqual, binsize, shift, ss, pe, pe_mid, maxfraglength, maxgap);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// coverage_core
List coverage_core(RObject gr, std::string bampath, int mapqual = 0, bool pe = false, int maxfraglength = 1000, int maxgap = 16385);
RcppExport SEXP bamsignals_coverage_core(SEXP grSEXP, SEXP bampathSEXP, SEXP mapqualSEXP, SEXP peSEXP, SEXP maxfraglengthSEXP, SEXP maxgapSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type gr(grSEXP );
        Rcpp::traits::input_parameter< std::string >::type bampath(bampathSEXP );
        Rcpp::traits::input_parameter< int >::type mapqual(mapqualSEXP );
        Rcpp::traits::input_parameter< bool >::type pe(peSEXP );
        Rcpp::traits::input_parameter< int >::type maxfraglength(maxfraglengthSEXP );
        Rcpp::traits::input_parameter< int >::type maxgap(maxgapSEXP );
        List __result = coverage_core(gr, bampath, mapqual, pe, maxfraglength, maxgap);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// writeSamAsBam
bool writeSamAsBam(const std::string& sampath, const std::string& bampath);
RcppExport SEXP bamsignals_writeSamAsBam(SEXP sampathSEXP, SEXP bampathSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type sampath(sampathSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type bampath(bampathSEXP );
        bool __result = writeSamAsBam(sampath, bampath);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
