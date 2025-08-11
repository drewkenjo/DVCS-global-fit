# DVCS fit

## Experimental inputs
**DVCS data:**
- cross sections: $\sigma(Q^2, x_B, -t, \phi)$
- difference between cross sections with different beam polarizations: $A_{LU}\sim\Delta\sigma(Q^2, x_B, -t, \phi)$

## Theoretical structure: GPDs &rarr; CFFs &rarr; Observables

Ideally, theoretical models predict DVCS observables by first parameterizing the Generalized Parton Distributions (GPDs) using a double distribution ansatz, computing the corresponding Compton Form Factors (CFFs) through convolution integrals, and then using these CFFs to predict the experimental quantities. In practice, however, performing a fully constrained parameterization of all GPDs is highly challenging due to limited data coverage and complex theoretical constraints. As an intermediate step, we can instead model directly the CFFs for valence quarks.

Additionally for DVCS channel, we can rely on the assumption that the GPD H dominates the DVCS channel and focus our fitting efforts on CFF ℋ:
- The imaginary part of CFF ℋ at leading-order can be modelled as:

$$\text{Im}ℋ(x,t) = \frac{nr}{1+x} \left(\frac{2x}{1+x}\right)^{-\alpha(t)} \left(\frac{1-x}{1+x}\right)^b \frac{1}{\left(1-\frac{1-x}{1+x}\frac{t}{M^2}\right)^p}$$

- The real part of CFF ℋ is determined by dispersion relation:

$$\text{Re}ℋ(\xi,t) = C_{ℋ}(t) + \frac{1}{\pi}𝒫\int^1_0dx\left[\frac{1}{\xi-x}-\frac{1}{\xi+x}\right]\text{Im}ℋ(x,t)$$

Finally, the cross sections are calculated using these CFFs:

$$\sigma(Q^2, x_B, -t, \phi) = f(\text{Im}ℋ, \text{Re}ℋ, \text{Im}ℰ, \text{Re}ℰ, \text{Im}\tilde ℋ, \text{Re}\tilde ℋ, \text{Im}\tilde ℰ, \text{Re}\tilde ℰ)$$

## Fitting procedure
- Build the $chi^2$ function:

$$\chi^2 = \sum_i \frac{(\sigma^{exp}_i - \sigma^{model}(x_i, Q^2_i, -t_i, \phi_i))}{\delta\sigma_i^2} + \frac{(\Delta\sigma^{exp}_i - \Delta\sigma^{model}(x_i, Q^2_i, -t_i, \phi_i))}{\delta\Delta\sigma_i^2}$$

where $\huge\sigma$ represents cross sections, $\huge\Delta\sigma$ represents their differences, and $\huge\delta\sigma$ ($\huge\delta\Delta\sigma$) are their associated uncertainties.

- By minimizing the $\chi^2$ function with respect to the parameters within the CFFs, we obtain refined parameterizations constrained by experimental measurements.

- Since the parameters of the real part of the CFF consist of those from its imaginary part together with a dispersion term, we therefore perform the extraction of the dispersion term.
