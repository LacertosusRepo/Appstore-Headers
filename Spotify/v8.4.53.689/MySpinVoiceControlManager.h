//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MySpinVoiceControlManager : NSObject
{
    NSString *previousAudioSessionCategory;
    unsigned long long previousAudioSessionCategoryOptions;
    _Bool _audioSessionIsActive;
}

@property(readonly) _Bool audioSessionIsActive; // @synthesize audioSessionIsActive=_audioSessionIsActive;
- (void).cxx_destruct;
- (void)closeVoiceControlLink:(_Bool)arg1;
- (_Bool)openVoiceControlLink;

@end

