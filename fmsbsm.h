// fmsbsm.h - Black-Scholes/Merton
// Formulas for pricing options using the Black-Scholes/Merton model.
#pragma once

/*
value = expected discounted cash flows

Assume interest rates are 0.

For a put option at k, on F = f exp(-sigma^2t/2 + sigma B_t)
where B_t is Brownian motion at time t.

Option value = E max(k - F,0).

If N is normal, then E exp(N) = exp(E(N) + Var(N)/2).
Also E exp(N) f(N) = E exp(N) E f(N + Var(N)).

So E max(k - F,0)
	= E (k - F) 1(F <= k)
	= k P(F <= k) - E F 1(F <= k)
	= k P(F <= k) - E F P^(F <= k), where dP^/dP = F/f and f = E F.

	E F 1(F <= k) 
	= E f F/f 1(F <= k)
	= f E F/f 1(F <= k) 
*/