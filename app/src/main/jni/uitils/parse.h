//
// Created by Administrator on 2020-09-14.
//

#ifndef INC_01_PARSE_H
#define INC_01_PARSE_H


#include <jni.h>
#include <string>
#include <list>


using namespace std;

class parse {

public:
    static jstring char2jstring(JNIEnv *env, const char *pat);

    static string jstring2str(JNIEnv *env, jstring jstr);

    static char *get_process_name();

    static bool jboolean2bool(jboolean value);

    static std::list<std::string> jlist2clist(JNIEnv *env,jobject jlist);

};


#endif //INC_01_PARSE_H
