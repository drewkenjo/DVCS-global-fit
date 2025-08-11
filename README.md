# DVCS fit

## Experimental inputs
**DVCS data:**
- cross sections: $\Large\sigma(Q^2, x_B, -t, \phi)$
- difference between cross sections with different beam polarizations: $\Large A_{LU}\sim\Delta\sigma(Q^2, x_B, -t, \phi)$

|-t bin value|Number of cross section points|Number of asymmetry points|Plot|
|----|----|----|----|
|-t=0.11| 219 | 219 | <img width="100" alt="all-xsss-0" src="https://github.com/user-attachments/assets/58818b54-feb8-414e-9413-78f6c44d5eb4" /> |
|-t=0.15| 250 | 250 | <img width="100" alt="all-xsss-1" src="https://github.com/user-attachments/assets/c5251225-1ca7-432d-94a3-895831594764" /> |
|-t=0.20| 353 | 353 | <img width="100" alt="all-xsss-2" src="https://github.com/user-attachments/assets/1db5df86-6f80-4026-a9ab-6b410b4c8719" /> |
|-t=0.26| 381 | 381 | <img width="100" alt="all-xsss-3" src="https://github.com/user-attachments/assets/f85982eb-ad84-4418-ba71-0da9527659bc" /> |
|-t=0.34| 373 | 373 | <img width="100" alt="all-xsss-4" src="https://github.com/user-attachments/assets/e52252df-133a-4775-b43d-bae5f84b9057" /> |
|-t=0.45| 357 | 357 | <img width="100" alt="all-xsss-5" src="https://github.com/user-attachments/assets/762fe3bf-02b6-4bf2-ad43-c2e342b938af" /> |
## Theoretical structure: GPDs &rarr; CFFs &rarr; Observables

Ideally, theoretical models predict DVCS observables by first parameterizing the Generalized Parton Distributions (GPDs) using a double distribution ansatz, computing the corresponding Compton Form Factors (CFFs) through convolution integrals, and then using these CFFs to predict the experimental quantities. In practice, however, performing a fully constrained parameterization of all GPDs is highly challenging due to limited data coverage and complex theoretical constraints. As an intermediate step, we can instead model directly the CFFs for valence quarks.

Additionally for DVCS channel, we can rely on the assumption that the GPD H dominates the DVCS channel and focus our fitting efforts on CFF $\largeℋ$:
- The imaginary part of CFF $\largeℋ$ at leading-order can be modelled as:

$$\Large\text{Im}ℋ(x,t) \quad = \quad \frac{{\color{red}n}r}{1+x} \left(\frac{2x}{1+x}\right)^{-{\color{red}\alpha(t)}} \left(\frac{1-x}{1+x}\right)^{\color{red}b} \frac{1}{\left(1-\frac{1-x}{1+x}\frac{t}{\color{red}M^2}\right)^{\color{red}p}}$$

- The real part of CFF $\largeℋ$ is determined by dispersion relation:

$$\Large{\color{red}\text{Re}ℋ(\xi,t)} \quad = \quad {\color{red}C_{ℋ}(t)} + \frac{1}{\pi}𝒫\int^1_0dx\left[\frac{1}{\xi-x}-\frac{1}{\xi+x}\right]{\color{red}\text{Im}ℋ(x,t)}$$

Finally, the cross sections are calculated using these CFFs:

$$\Large\sigma(Q^2, x_B, -t, \phi) \quad = \quad f({\color{red}\text{Im}ℋ}, {\color{red}\text{Re}ℋ}, \text{Im}ℰ, \text{Re}ℰ, \text{Im}\tilde ℋ, \text{Re}\tilde ℋ, \text{Im}\tilde ℰ, \text{Re}\tilde ℰ)$$

## Fitting procedure
- Build the $\Large\chi^2$ function:

$$\Large\chi^2 \quad = \quad \sum_i \frac{(\sigma^{exp}_i - \sigma^{model}(x_i, Q^2_i, -t_i, \phi_i))}{\delta\sigma_i^2} \quad + \quad \frac{(\Delta\sigma^{exp}_i - \Delta\sigma^{model}(x_i, Q^2_i, -t_i, \phi_i))}{\delta\Delta\sigma_i^2}$$

where $\huge\sigma$ represents cross sections, $\huge\Delta\sigma$ represents their differences, and $\huge\delta\sigma$ ($\huge\delta\Delta\sigma$) are their associated uncertainties.

- By minimizing the $\Large\chi^2$ function with respect to the parameters within the CFFs, we obtain refined parameterizations constrained by experimental measurements.

- Since the parameters of the real part of the CFF consist of those from its imaginary part together with a dispersion term, we therefore perform the extraction of the dispersion term.
