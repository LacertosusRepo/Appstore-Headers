//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTVoiceCommandMedia : NSObject
{
    NSURL *_imageURI;
    NSString *_imagePlaceholder;
}

@property(readonly, nonatomic) NSString *imagePlaceholder; // @synthesize imagePlaceholder=_imagePlaceholder;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURI:(id)arg1 placeholder:(id)arg2;

@end

