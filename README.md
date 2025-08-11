# DVCS fit

## Experimental inputs
**DVCS data:**
- cross sections: $\Large\sigma(Q^2, x_B, -t, \phi)$
- difference between cross sections with different beam polarizations: $\Large A_{LU}\sim\Delta\sigma(Q^2, x_B, -t, \phi)$

|-t bin value|Number of cross section points|Number of asymmetry points|Plot|
|----|----|----|----|
|-t=0.11| 219 | 219 | <img width="100" src="https://github.com/user-attachments/assets/9b425954-a1a4-42d9-9ad7-0e5defe3da22" /> |
|-t=0.15| 250 | 250 | <img width="100" src="https://github.com/user-attachments/assets/9aae2a84-eb6e-4438-9c14-4a7e600c401c" /> |
|-t=0.20| 353 | 353 | <img width="100" src="https://github.com/user-attachments/assets/60469eff-b70f-4de9-bb76-e9ff4bd3377c" /> |
|-t=0.26| 381 | 381 | <img width="100" src="https://github.com/user-attachments/assets/d680ca54-3e27-4881-9244-11fe488660dc" /> |
|-t=0.34| 373 | 373 | <img width="100" src="https://github.com/user-attachments/assets/44d08b63-4c71-4378-88c1-8d98fa7a04fa" /> |
|-t=0.45| 357 | 357 | <img width="100" src="https://github.com/user-attachments/assets/daf805a2-22d5-4ed3-92e0-1bc2885edb06" /> |




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

## Local fitting

As an intermediate step we can perform the extraction of Imaginary and Real parts of CFF $\largeℋ$ for each $\large(\xi, -t)$ bin:

|-t bin value| original plot | overlayed plot |
|----|----|----|
|-t=0.11| <img width="100" alt="Screenshot 2025-08-11 at 11 41 05 AM" src="https://github.com/user-attachments/assets/01b449b9-1efc-4c81-8d0c-c71722ec985f" /> | <img width="100" alt="Screenshot 2025-08-11 at 11 41 12 AM" src="https://github.com/user-attachments/assets/313311bb-3d8b-464c-8cda-6d8efb3c04c5" /> |
|-t=0.15| <img width="100" alt="Screenshot 2025-08-11 at 11 40 41 AM" src="https://github.com/user-attachments/assets/84095c11-33bd-433b-894a-4b1d75d35e66" /> | <img width="100" alt="Screenshot 2025-08-11 at 11 40 50 AM" src="https://github.com/user-attachments/assets/1d5ad212-7d9f-4cc8-8452-e07d9e4da341" /> |
|-t=0.20| <img width="100" alt="Screenshot 2025-08-11 at 11 41 19 AM" src="https://github.com/user-attachments/assets/b9ca6e6a-1b6b-4a47-9b11-0609dfc69e9b" /> | <img width="100" alt="Screenshot 2025-08-11 at 11 41 25 AM" src="https://github.com/user-attachments/assets/83688bd6-085c-4e46-a441-901a11d34f44" /> |
|-t=0.26| <img width="100" alt="Screenshot 2025-08-11 at 11 41 33 AM" src="https://github.com/user-attachments/assets/71802248-8066-46ea-aeb6-9ab2da4c234d" /> | <img width="100" alt="Screenshot 2025-08-11 at 11 41 39 AM" src="https://github.com/user-attachments/assets/b12d1fcb-2fc4-4ddf-98c3-d65ee8ebd1b9" /> |
|-t=0.34| <img width="100" alt="Screenshot 2025-08-11 at 11 41 47 AM" src="https://github.com/user-attachments/assets/c2174b63-d930-42c6-b3a6-ab60a961c0c8" /> | <img width="100" alt="Screenshot 2025-08-11 at 11 41 53 AM" src="https://github.com/user-attachments/assets/92f3549e-04aa-46a4-820d-ebad6f32223d" /> |





