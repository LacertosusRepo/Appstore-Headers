//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_fileURL;
    unsigned int _systemSoundID;
}

+ (id)sharedLoader;
+ (id)data;
+ (unsigned long long)version;
+ (id)name;
- (void).cxx_destruct;
- (id)_fileURL:(id *)arg1;
- (void)playSound;
- (_Bool)loadSound:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

