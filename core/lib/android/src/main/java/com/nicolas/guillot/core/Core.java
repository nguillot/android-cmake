package com.nicolas.guillot.core;


public class Core {
  static {
    System.loadLibrary("core");
  }

  public static native String toUpperCase(final String str);
}
