package com.example.ndksample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    // 라이브러리 내부에 다음과 같은 함수명이 있다는 것을 JVM 에게 알려준다.
    external fun stringFromJNI() : String

    companion object {
        init {
            // 아래 함수를 이용해 C++ 빌드 파일을 라이브러리로 변환해 플랫폼에 적재, 내부의 네이티브 함수를 사용할 수 있도록 한다.
            // native-lib 라는 라이브러리를 load 하면 파일명은 lib + native-lib + .so
            // libnative-lib.so 가 된다.
            System.loadLibrary("native-lib")
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        tv_main.text = stringFromJNI()
    }
}