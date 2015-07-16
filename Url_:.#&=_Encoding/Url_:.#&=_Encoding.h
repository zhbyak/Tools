

//这个类只负责url中含有特殊符号的编码和解码

//进行url编码 （但是不对汉字和空格进行编码）
- (NSString *)encodeToPercentEscapeString:(NSString *)input {
  NSString *outputStr =
      (NSString *)CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(
          kCFAllocatorDefault, (CFStringRef)input, NULL,
          (CFStringRef) @"!*'();:@&=+ $,/?%#[]", kCFStringEncodingUTF8));
  return outputStr;
}

// url解码
- (NSString *)decodeFromPercentEscapeString:(NSString *)input {
  return
      [input stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
}
