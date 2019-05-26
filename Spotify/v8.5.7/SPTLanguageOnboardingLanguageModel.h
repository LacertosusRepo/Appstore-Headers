//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTLanguageOnboardingLanguageModel : NSObject
{
    NSString *_languageName;
    NSString *_languageCode;
    NSURL *_imageURL;
}

@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
- (void).cxx_destruct;
- (id)initWithLanguageName:(id)arg1 languageCode:(id)arg2 imageURL:(id)arg3;

@end
