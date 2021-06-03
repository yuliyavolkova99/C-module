#include <Python.h>
#include <math.h>

static PyObject *bubblesort(PyObject *self, PyObject *args){
    PyObject* list;
    int i, L;
    double res;
    double tmp;
    if (!PyArg_ParseTuple(args, "O", &list)){
        return NULL;
    }
	L = PyList_GET_SIZE(list);
    double *A = (double**)malloc(L * sizeof(double*));
    for (i=0; i<L; i++){
        PyObject* item = PySequence_Fast_GET_ITEM(list, i);
	    res = PyFloat_AsDouble(item);
	    A[i] = res;
    }
    _Bool noSwap;
    for (int i = L - 1; i >= 0; i--){
        noSwap = 1;
        for (int j = 0; j < i; j++){
            if (A[j] > A[j + 1]){
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
    PyObject *my_list = PyList_New(L);
    for (i=0; i<L; i++)
    PyList_SetItem(my_list, i,  PyFloat_FromDouble(A[i]));
    return my_list;
    free(A);

}
static PyObject *insertionsort(PyObject *self, PyObject *args){
    PyObject* list;
    int i, N, location;
    double res;
    double newElement;
    if (!PyArg_ParseTuple(args, "O", &list)){
        return NULL;
    }
	N = PyList_GET_SIZE(list);
    double *mass = (double**)malloc(N * sizeof(double*));
    for (i=0; i<N; i++){
        PyObject* item = PySequence_Fast_GET_ITEM(list, i);
	    res = PyFloat_AsDouble(item);
	    mass[i] = res;
    }
    for (i = 1; i < N; i++){
            newElement = mass[i];
            location = i - 1;
            while(location >= 0 && mass[location] > newElement){
                mass[location+1] = mass[location];
                location = location - 1;
            }
            mass[location+1] = newElement;
        }
    PyObject *my_list = PyList_New(N);
    for (i=0; i<N; i++)
    PyList_SetItem(my_list, i,  PyFloat_FromDouble(mass[i]));
    return my_list;
    free(mass);
}

static PyObject *choicesort(PyObject *self, PyObject *args){
    PyObject* list;
    int minPosition, i, N, j;
    double res;
    double  tmp;
    if (!PyArg_ParseTuple(args, "O", &list)){
        return NULL;
    }
	N = PyList_GET_SIZE(list);
    double *mass = (double**)malloc(N * sizeof(double*));
    for (i=0; i<N; i++){
        PyObject* item = PySequence_Fast_GET_ITEM(list, i);
	    res = PyFloat_AsDouble(item);
	    mass[i] = res;
    }
    for (int i = 0; i < N; i++){
        minPosition = i;
        for (int j = i + 1; j < N; j++) {
            if (mass[minPosition] > mass[j]) {
                minPosition = j;
            }
        tmp = mass[minPosition];
        mass[minPosition] = mass[i];
        mass[i] = tmp;
        }
    }
    PyObject *my_list = PyList_New(N);
    for (i=0; i<N; i++)
    PyList_SetItem(my_list, i,  PyFloat_FromDouble(mass[i]));
    return my_list;
    free(mass);
}

static PyObject *shellsort(PyObject *self, PyObject *args){
    PyObject* list;
    int i, j, N, step;
    double res;
    double tmp;
    if (!PyArg_ParseTuple(args, "O", &list)){
        return NULL;
    }
	N = PyList_GET_SIZE(list);
    double *mass = (double**)malloc(N * sizeof(double*));
    for (i=0; i<N; i++){
        PyObject* item = PySequence_Fast_GET_ITEM(list, i);
	    res = PyFloat_AsDouble(item);
	    mass[i] = res;
    }
    for (step = N / 2; step > 0; step /= 2){
        for (i = step; i < N; i++){
            tmp = mass[i];
            for (j = i; j >= step; j -= step){
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
    }
    PyObject *my_list = PyList_New(N);
    for (i=0; i<N; i++)
    PyList_SetItem(my_list, i,  PyFloat_FromDouble(mass[i]));
    return my_list;
    free(mass);

}
static PyMethodDef ownmod_methods[] = {

    {
	"shellsort",
	shellsort,
	 METH_VARARGS,
	"shellsort"
    },
    {
	"choicesort",
	choicesort,
	 METH_VARARGS,
	"choicesort"
    },
    {
	"bubblesort",
	bubblesort,
	 METH_VARARGS,
	"bubblesort"
    },
    {
	"insertionsort",
	insertionsort,
	 METH_VARARGS,
	"insertionsort"
    },
    { NULL, NULL, 0, NULL }
};

static PyModuleDef simple_module = {

    PyModuleDef_HEAD_INIT,
    "sortP",
    "sortP",
    -1,
    ownmod_methods, // methods are here
    NULL,NULL,NULL
};

PyMODINIT_FUNC PyInit_sortP(void)
{
    PyObject* m;
    m = PyModule_Create(&simple_module);
    if (m == NULL)
        return NULL;
    return m;}
