/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE690_NULL_Deref_From_Return__fopen_83.h
Label Definition File: CWE690_NULL_Deref_From_Return.fclose.label.xml
Template File: source-sinks-83.tmpl.h
*/
/*
 * @description
 * CWE: 690 Unchecked Return Value To NULL Pointer
 * BadSource: fopen Open data with fopen()
 * Sinks: 0
 *    GoodSink: Check data for NULL
 *    BadSink : Do not check data for NULL
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */

#include "std_testcase.h"

namespace CWE690_NULL_Deref_From_Return__fopen_83
{

#ifndef OMITBAD

class CWE690_NULL_Deref_From_Return__fopen_83_bad
{
public:
    CWE690_NULL_Deref_From_Return__fopen_83_bad(FILE * dataCopy);
    ~CWE690_NULL_Deref_From_Return__fopen_83_bad();

private:
    FILE * data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE690_NULL_Deref_From_Return__fopen_83_goodB2G
{
public:
    CWE690_NULL_Deref_From_Return__fopen_83_goodB2G(FILE * dataCopy);
    ~CWE690_NULL_Deref_From_Return__fopen_83_goodB2G();

private:
    FILE * data;
};

#endif /* OMITGOOD */

}
