//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTIconManager : NSObject
{
}

+ (void)loadSpoticonFontFile;
+ (id)spoticonFont;
+ (id)keyFromConfiguration:(id)arg1;
+ (id)sharedCache;
+ (id)iconWithConfiguration:(id)arg1;
+ (_Bool)isValidCharacter:(unsigned short)arg1;
+ (id)stringForIcon:(long long)arg1 size:(long long)arg2;
+ (unsigned short)characterForIcon:(long long)arg1 size:(long long)arg2;
+ (id)dictionaryOfCharacterMappings;
+ (id)valueWithCharacterSetFromCharacters:(unsigned long long)arg1;
+ (struct SPTIconCharacterSet)patchSet:(struct SPTIconCharacterSet)arg1;

@end

