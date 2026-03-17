#ifndef BMK_DVCS_H
#define BMK_DVCS_H

#include<TMath.h>
#include<iostream>

extern double PI;
extern double alpha3;

extern double alpha;
extern double hbarc2;

extern double m;
extern double M;
extern double muP;

extern bool hasH;
extern bool hasHt;
extern bool hasE;
extern bool hasEt;

extern void set_hasH(bool);
extern void set_hasHt(bool);
extern void set_hasE(bool);
extern void set_hasEt(bool);

extern double get_xi(double xB, double t, double Q2);

extern double GetF1(double T);
extern double GetF2(double T);
extern double GetGMP(double tau);
extern double GetGEP(double tau);

extern double GetImH(double xi, double t);
extern double GetImH(double xi, double t, double r, double b);
extern double GetImH(double xi, double t, double r, double b, double bsea);
extern double GetReHviaDterm(double xi, double t);
extern double GetReHviaDterm(double xi, double t, double r, double b);
extern double GetReHviaDterm(double xi, double t, double r, double b, double d);
extern double GetReHviaDterm(double xi, double t, double r, double b, double d, double bsea);

extern double GetImHt(double xi, double t);
extern double GetImE(double xi, double t);
extern double GetImEt(double xi, double t);

extern double GetReH(double xi, double t);
extern double GetReHt(double xi, double t);
extern double GetReE(double xi, double t);
extern double GetReEt(double xi, double t);

////////////////////////////////////////////////////////////////////////////////////////////////////////////

class BMK_DVCS{
	public:
		double q_beam, L_beam, L_target;
		double EB, xB, Q2, t, phi, theta_Tpol, phi_Tpol;//primary variables ; EB on fixed target ; Trento convention 

		double xi, nu, y, eps, eps2, phi_BMK, t_min, K2, K, J, Ktild2, Ktilda;//secondary variables ;  phi_BMK = pi - phi_Trento
		double Jacob;//Jacobian from (xB,y) to (xB,Q2)
		double F1, F2, FF_comb1, FF_comb2, FF_comb3;
		double ImH, ImHt, ImE, ImEt;
		double ReH, ReHt, ReE, ReEt;

    double localReH=0;
    double localImH=0;
    bool enableLocalReH=false;
    bool enableLocalImH=false;

    bool VERB;

		BMK_DVCS(double rq_beam, double rL_beam, double rL_target, double rEB, double rxB, double rQ2, double rt, double rphi, double rtheta_Tpol=0, double rphi_Tpol=0);
		void setSecondaryVars(void);
		void setPrimaryVars(double rq_beam, double rL_beam, double rL_target, double rEB, double rxB, double rQ2, double rt, double rphi, double rtheta_Tpol=0, double rphi_Tpol=0);

    double rvalImH = 0.9;
    double bvalImH = 0.4;
    double bseaImH = 0.4;
    double dTerm = 0;

    void setParsImH(double r, double b, double d) {
      rvalImH=r;
      bvalImH=b;
      dTerm=d;
    };

    void setParsImH(double r, double b, double d, double bs) {
      rvalImH=r;
      bvalImH=b;
      dTerm=d;
      bseaImH=bs;
    };

    void setLocalImH(double _local) {
      enableLocalImH = true;
      localImH = _local;
    };

    void setLocalReH(double _local) {
      enableLocalReH = true;
      localReH = _local;
    };

		double CrossSection(void);
		double TPolCrossSection(void);
		double BSA(void);
		double pBSA(void);
		double TLSA(void);
		double TLLSA(void);
		double TTSAx(void);
		double TTSAy(void);
		double TTSSAx(void);
		double TTSSAy(void);
		double BCA(void);
		double BCSA(void);
		double BC0SA(void);
		
		double BCLA(void);
		double BCLLA(void);
		double BCTxA(void);
		double BCTyA(void);

		double T2(void);
		double BH2(void);
		double DVCS2(void);
		double BHDVCS(void);

		double c0_BH(void);
		double c1_BH(void);
		double c2_BH(void);
		double c0_BH_LP(void);
		double c1_BH_LP(void);
		double c0_BH_TP(void);
		double c1_BH_TP(void);
		double s1_BH_TP(void);
		double BHP1(void);
		double BHP2(void);

		double c0_I(void);
		double c1_I(void);
		double s1_I(void);
		double c0_I_LP(void);
		double c1_I_LP(void);
		double s1_I_LP(void);
		double c0_I_TP(void);
		double c1_I_TP(void);
		double s1_I_TP(void);
		
		double c0_DVCS(void);
		double c0_DVCS_LP(void);
		double c0_DVCS_TP(void);
};

#endif

