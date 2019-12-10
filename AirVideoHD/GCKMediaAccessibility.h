//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKMediaAccessibility : NSObject
{
    void *_libraryHandle;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceCopyBackgroundColor;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceCopyFontDescriptorForStyle;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceCopyForegroundColor;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceCopyWindowColor;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceGetRelativeCharacterSize;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceGetTextEdgeStyle;
    CDUnknownFunctionPointerType _fnMACaptionAppearanceGetWindowRoundedCornerRadius;
}

+ (id)sharedInstance;
- (double)captionAppearanceGetWindowRoundedCornerRadius;
- (long long)captionAppearanceGetTextEdgeStyle;
- (double)captionAppearanceGetRelativeCharacterSize;
- (struct __CTFontDescriptor *)captionAppearanceCopyFontDescriptorForStyle:(long long)arg1;
- (id)captionAppearanceCopyWindowColor;
- (id)captionAppearanceCopyForegroundColor;
- (id)captionAppearanceCopyBackgroundColor;
- (_Bool)isSupported;
- (void)dealloc;
- (id)init;

@end

