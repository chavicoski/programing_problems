#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <sstream>
#define MAX_VALUE 1e9

class Adyacente {
public:
    int dest, coste;

    Adyacente(int dest, int coste) {
        this->dest = dest;
        this->coste = coste;
    }
};

class Grafo {
public:
    int numNodos , numAristas;
    std::vector<int> gradosEntrada;
    std::vector <std::vector <Adyacente> > adyacentes;

    Grafo(int numNodos) {
        this->numNodos = numNodos;
        this->numAristas = 0;
        gradosEntrada.resize(numNodos,0);
        adyacentes.resize(numNodos);
    }

    void insertarArista(int origen, int dest, int coste) {
        Adyacente ady(dest, coste);
        adyacentes[origen].push_back(ady);
        gradosEntrada[dest]++;
        numAristas ++;
    }

    int getArista(int origen, int dest) {
        for(auto ady : adyacentes[origen]) {
            if(ady.dest == dest) {
                return ady.coste;
            }
        }
        return 0;
    }

    bool existeArista(int origen, int dest) {
        for(auto ady : adyacentes[origen]) {
            if(ady.dest == dest) {
                return true;
            }
        }
        return false;
    }

    void eliminarArista(int origen, int dest) {
        for(unsigned int i = 0; i < adyacentes[origen].size(); i++) {
            Adyacente ady = adyacentes[origen][i];
            if(ady.dest == dest) {
                adyacentes[origen].erase(adyacentes[origen].begin() + i);
                gradosEntrada[origen]--;
                numAristas--;
            }
        }
    }

};

std::vector<std::vector<int>> floydWarshall(Grafo g) {
    std::vector<std::vector<int>> costeMin(g.numNodos, std::vector<int>(g.numNodos));
    for (int i = 0; i < g.adyacentes.size(); i++) {
        for (int j = 0; j < g.adyacentes.size(); j++) {
            if (g.existeArista(i, j)) costeMin[i][j] = g.getArista(i, j);
            else costeMin[i][j] = MAX_VALUE/2;
        }
    }
    for (int k = 0; k < g.adyacentes.size(); k++) {
        for (int i = 0; i < g.adyacentes.size(); i++) {
            for (int j = 0; j < g.adyacentes.size(); j++) {
                costeMin[i][j] = std::min(costeMin[i][j], (costeMin[i][k] + costeMin[k][j]));
            }
        }
    }
    return costeMin;
}

int main() {
    int ncase = 1;
    int nGrafo = 1;
    int nc;
    scanf("%d",nc);
    int x,y;
    while(nc != 0) { // leer todos los grafos
        Grafo g = Grafo(0);
        while(nc != 0) { // leer todas las conexiones
            scanf("%d %d",&x,&y);
            g.insertarArista(x,y,1);
            nc--;
        }
        scanf("%d %d",&x,&y);
        while(x != 0 && y != 0) {
            int reachables = 0;
            std::vector<std::vector<int>> v = floydWarshall(g);
            for(int i : v[x]) {
                if(i > y) reachables++;
            }
            scanf("%d %d",&x,&y);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d\n",ncase,x,y);
        }
        ncase++;
        nc = getchar();
    }
    return 0;
}