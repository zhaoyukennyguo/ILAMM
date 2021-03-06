// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sgn
int sgn(const double x);
RcppExport SEXP _ILAMM_sgn(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sgn(x));
    return rcpp_result_gen;
END_RCPP
}
// softThresh
arma::vec softThresh(const arma::vec& x, const arma::vec& lambda);
RcppExport SEXP _ILAMM_softThresh(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(softThresh(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// cmptLambda
arma::vec cmptLambda(const arma::vec& beta, const double lambda, const std::string penalty);
RcppExport SEXP _ILAMM_cmptLambda(SEXP betaSEXP, SEXP lambdaSEXP, SEXP penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const std::string >::type penalty(penaltySEXP);
    rcpp_result_gen = Rcpp::wrap(cmptLambda(beta, lambda, penalty));
    return rcpp_result_gen;
END_RCPP
}
// loss
double loss(const arma::vec& Y, const arma::vec& Ynew, const std::string lossType, const double tau);
RcppExport SEXP _ILAMM_loss(SEXP YSEXP, SEXP YnewSEXP, SEXP lossTypeSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Ynew(YnewSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(loss(Y, Ynew, lossType, tau));
    return rcpp_result_gen;
END_RCPP
}
// gradLoss
arma::vec gradLoss(const arma::mat& X, const arma::vec& Y, const arma::vec& beta, const std::string lossType, const double tau, const bool interecept);
RcppExport SEXP _ILAMM_gradLoss(SEXP XSEXP, SEXP YSEXP, SEXP betaSEXP, SEXP lossTypeSEXP, SEXP tauSEXP, SEXP intereceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const bool >::type interecept(intereceptSEXP);
    rcpp_result_gen = Rcpp::wrap(gradLoss(X, Y, beta, lossType, tau, interecept));
    return rcpp_result_gen;
END_RCPP
}
// updateBeta
arma::vec updateBeta(const arma::mat& X, const arma::vec& Y, arma::vec beta, const double phi, const arma::vec& Lambda, const std::string lossType, const double tau, const bool intercept);
RcppExport SEXP _ILAMM_updateBeta(SEXP XSEXP, SEXP YSEXP, SEXP betaSEXP, SEXP phiSEXP, SEXP LambdaSEXP, SEXP lossTypeSEXP, SEXP tauSEXP, SEXP interceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    rcpp_result_gen = Rcpp::wrap(updateBeta(X, Y, beta, phi, Lambda, lossType, tau, intercept));
    return rcpp_result_gen;
END_RCPP
}
// cmptF
double cmptF(const arma::mat& X, const arma::vec& Y, const arma::vec& betaNew, const std::string lossType, const double tau);
RcppExport SEXP _ILAMM_cmptF(SEXP XSEXP, SEXP YSEXP, SEXP betaNewSEXP, SEXP lossTypeSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type betaNew(betaNewSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(cmptF(X, Y, betaNew, lossType, tau));
    return rcpp_result_gen;
END_RCPP
}
// cmptPsi
double cmptPsi(const arma::mat& X, const arma::vec& Y, const arma::vec& betaNew, const arma::vec& beta, const double phi, const std::string lossType, const double tau, const bool intercept);
RcppExport SEXP _ILAMM_cmptPsi(SEXP XSEXP, SEXP YSEXP, SEXP betaNewSEXP, SEXP betaSEXP, SEXP phiSEXP, SEXP lossTypeSEXP, SEXP tauSEXP, SEXP interceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type betaNew(betaNewSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    rcpp_result_gen = Rcpp::wrap(cmptPsi(X, Y, betaNew, beta, phi, lossType, tau, intercept));
    return rcpp_result_gen;
END_RCPP
}
// LAMM
Rcpp::List LAMM(const arma::mat& X, const arma::vec& Y, const arma::vec& Lambda, arma::vec beta, const double phi, const std::string lossType, const double tau, const double gamma, const bool interecept);
RcppExport SEXP _ILAMM_LAMM(SEXP XSEXP, SEXP YSEXP, SEXP LambdaSEXP, SEXP betaSEXP, SEXP phiSEXP, SEXP lossTypeSEXP, SEXP tauSEXP, SEXP gammaSEXP, SEXP intereceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const bool >::type interecept(intereceptSEXP);
    rcpp_result_gen = Rcpp::wrap(LAMM(X, Y, Lambda, beta, phi, lossType, tau, gamma, interecept));
    return rcpp_result_gen;
END_RCPP
}
// ncvxReg
Rcpp::List ncvxReg(arma::mat X, const arma::vec& Y, double lambda, std::string penalty, const double phi0, const double gamma, const double epsilon_c, const double epsilon_t, const int iteMax, const bool intercept, const bool itcpIncluded);
RcppExport SEXP _ILAMM_ncvxReg(SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP penaltySEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilon_cSEXP, SEXP epsilon_tSEXP, SEXP iteMaxSEXP, SEXP interceptSEXP, SEXP itcpIncludedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_c(epsilon_cSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_t(epsilon_tSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const bool >::type itcpIncluded(itcpIncludedSEXP);
    rcpp_result_gen = Rcpp::wrap(ncvxReg(X, Y, lambda, penalty, phi0, gamma, epsilon_c, epsilon_t, iteMax, intercept, itcpIncluded));
    return rcpp_result_gen;
END_RCPP
}
// ncvxHuberReg
Rcpp::List ncvxHuberReg(arma::mat X, const arma::vec& Y, double lambda, std::string penalty, double tau, const double phi0, const double gamma, const double epsilon_c, const double epsilon_t, const int iteMax, const bool intercept, const bool itcpIncluded);
RcppExport SEXP _ILAMM_ncvxHuberReg(SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP penaltySEXP, SEXP tauSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilon_cSEXP, SEXP epsilon_tSEXP, SEXP iteMaxSEXP, SEXP interceptSEXP, SEXP itcpIncludedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_c(epsilon_cSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_t(epsilon_tSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const bool >::type itcpIncluded(itcpIncludedSEXP);
    rcpp_result_gen = Rcpp::wrap(ncvxHuberReg(X, Y, lambda, penalty, tau, phi0, gamma, epsilon_c, epsilon_t, iteMax, intercept, itcpIncluded));
    return rcpp_result_gen;
END_RCPP
}
// getIndex
arma::uvec getIndex(const int n, const int low, const int up);
RcppExport SEXP _ILAMM_getIndex(SEXP nSEXP, SEXP lowSEXP, SEXP upSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const int >::type up(upSEXP);
    rcpp_result_gen = Rcpp::wrap(getIndex(n, low, up));
    return rcpp_result_gen;
END_RCPP
}
// getIndexComp
arma::uvec getIndexComp(const int n, const int low, const int up);
RcppExport SEXP _ILAMM_getIndexComp(SEXP nSEXP, SEXP lowSEXP, SEXP upSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const int >::type up(upSEXP);
    rcpp_result_gen = Rcpp::wrap(getIndexComp(n, low, up));
    return rcpp_result_gen;
END_RCPP
}
// tauConst
arma::vec tauConst(int n);
RcppExport SEXP _ILAMM_tauConst(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(tauConst(n));
    return rcpp_result_gen;
END_RCPP
}
// cvNcvxReg
Rcpp::List cvNcvxReg(arma::mat& X, const arma::vec& Y, Rcpp::Nullable<Rcpp::NumericVector> lSeq, int nlambda, const std::string penalty, const double phi0, const double gamma, const double epsilon_c, const double epsilon_t, const int iteMax, int nfolds, const bool intercept, const bool itcpIncluded);
RcppExport SEXP _ILAMM_cvNcvxReg(SEXP XSEXP, SEXP YSEXP, SEXP lSeqSEXP, SEXP nlambdaSEXP, SEXP penaltySEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilon_cSEXP, SEXP epsilon_tSEXP, SEXP iteMaxSEXP, SEXP nfoldsSEXP, SEXP interceptSEXP, SEXP itcpIncludedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type lSeq(lSeqSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< const std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_c(epsilon_cSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_t(epsilon_tSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    Rcpp::traits::input_parameter< int >::type nfolds(nfoldsSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const bool >::type itcpIncluded(itcpIncludedSEXP);
    rcpp_result_gen = Rcpp::wrap(cvNcvxReg(X, Y, lSeq, nlambda, penalty, phi0, gamma, epsilon_c, epsilon_t, iteMax, nfolds, intercept, itcpIncluded));
    return rcpp_result_gen;
END_RCPP
}
// cvNcvxHuberReg
Rcpp::List cvNcvxHuberReg(arma::mat& X, const arma::vec& Y, Rcpp::Nullable<Rcpp::NumericVector> lSeq, int nlambda, const std::string penalty, Rcpp::Nullable<Rcpp::NumericVector> tSeq, int ntau, const double phi0, const double gamma, const double epsilon_c, const double epsilon_t, const int iteMax, int nfolds, const bool intercept, const bool itcpIncluded);
RcppExport SEXP _ILAMM_cvNcvxHuberReg(SEXP XSEXP, SEXP YSEXP, SEXP lSeqSEXP, SEXP nlambdaSEXP, SEXP penaltySEXP, SEXP tSeqSEXP, SEXP ntauSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilon_cSEXP, SEXP epsilon_tSEXP, SEXP iteMaxSEXP, SEXP nfoldsSEXP, SEXP interceptSEXP, SEXP itcpIncludedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type lSeq(lSeqSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< const std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type tSeq(tSeqSEXP);
    Rcpp::traits::input_parameter< int >::type ntau(ntauSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_c(epsilon_cSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon_t(epsilon_tSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    Rcpp::traits::input_parameter< int >::type nfolds(nfoldsSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const bool >::type itcpIncluded(itcpIncludedSEXP);
    rcpp_result_gen = Rcpp::wrap(cvNcvxHuberReg(X, Y, lSeq, nlambda, penalty, tSeq, ntau, phi0, gamma, epsilon_c, epsilon_t, iteMax, nfolds, intercept, itcpIncluded));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ILAMM_sgn", (DL_FUNC) &_ILAMM_sgn, 1},
    {"_ILAMM_softThresh", (DL_FUNC) &_ILAMM_softThresh, 2},
    {"_ILAMM_cmptLambda", (DL_FUNC) &_ILAMM_cmptLambda, 3},
    {"_ILAMM_loss", (DL_FUNC) &_ILAMM_loss, 4},
    {"_ILAMM_gradLoss", (DL_FUNC) &_ILAMM_gradLoss, 6},
    {"_ILAMM_updateBeta", (DL_FUNC) &_ILAMM_updateBeta, 8},
    {"_ILAMM_cmptF", (DL_FUNC) &_ILAMM_cmptF, 5},
    {"_ILAMM_cmptPsi", (DL_FUNC) &_ILAMM_cmptPsi, 8},
    {"_ILAMM_LAMM", (DL_FUNC) &_ILAMM_LAMM, 9},
    {"_ILAMM_ncvxReg", (DL_FUNC) &_ILAMM_ncvxReg, 11},
    {"_ILAMM_ncvxHuberReg", (DL_FUNC) &_ILAMM_ncvxHuberReg, 12},
    {"_ILAMM_getIndex", (DL_FUNC) &_ILAMM_getIndex, 3},
    {"_ILAMM_getIndexComp", (DL_FUNC) &_ILAMM_getIndexComp, 3},
    {"_ILAMM_tauConst", (DL_FUNC) &_ILAMM_tauConst, 1},
    {"_ILAMM_cvNcvxReg", (DL_FUNC) &_ILAMM_cvNcvxReg, 13},
    {"_ILAMM_cvNcvxHuberReg", (DL_FUNC) &_ILAMM_cvNcvxHuberReg, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_ILAMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
