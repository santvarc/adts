#pragma once

#ifndef INFINITO
#define INFINITO 999999999
#endif

#include "Conversor.h"

typedef unsigned int nat;

#include "Funcion.h"

template <class V, class A>
class FuncionCosto : Funcion3<V,V,A,nat>, Funcion1<V,nat>
{
public:
	static const FuncionCosto<V,A>& Default;
protected:
	virtual nat Evaluar(const V& v1, const V& v2, const A& arco) const { return 1; }
	virtual nat Evaluar(const V& v) const { return 1; }
};

template <class V, class A>
const FuncionCosto<V,A>& FuncionCosto<V,A>::Default = FuncionCosto<V,A>::FuncionCosto();
