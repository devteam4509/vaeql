<?php

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.0
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

// Try to load our extension if it's not already loaded.
if (!extension_loaded('VerbQueryLanguage')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_VerbQueryLanguage.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('VerbQueryLanguage.so')) return;
    } else {
      if (!dl('VerbQueryLanguage.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class VerbQueryLanguage {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_VerbQueryLanguage_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_VerbQueryLanguage_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function query($input) {
		return VerbQueryLanguage_query($input);
	}

	public function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_VerbQueryLanguage') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_VerbQueryLanguage();
	}
}


?>
