//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ANSFirebaseAnalyticsBridge : NSObject
{
    id _firebaseAnalytics;
    NSArray *_firebaseReservedKeys;
}

+ (id)sanitizeAttributeName:(id)arg1;
+ (id)sanitizeEventName:(id)arg1;
+ (id)sanitizeKeyName:(id)arg1;
+ (id)firebaseReservedKeys;
+ (_Bool)isFailableEvent:(id)arg1;
+ (id)transformedBaseParameters:(id)arg1 forFirebaseEventName:(id)arg2;
+ (id)extractBaseParameterDictionaryFromPredefinedAttributes:(id)arg1 withKeyMapping:(id)arg2;
+ (id)predefinedParametersFromPredefinedAttributes:(id)arg1 forFirebaseEventName:(id)arg2;
+ (id)customParametersFromCustomAttributes:(id)arg1;
+ (id)combinedParametersFromPredefinedParameters:(id)arg1 customParameters:(id)arg2;
+ (id)firebaseEventParametersForPredefinedAttributes:(id)arg1 customAttributes:(id)arg2 firebaseEventName:(id)arg3;
+ (id)failedEventName:(id)arg1;
+ (_Bool)shouldUseFailedEventName:(id)arg1 predefinedAttributes:(id)arg2;
+ (id)firebaseEventNameForAnswersEventName:(id)arg1 predefinedAttributes:(id)arg2;
@property(retain, nonatomic) NSArray *firebaseReservedKeys; // @synthesize firebaseReservedKeys=_firebaseReservedKeys;
@property(retain, nonatomic) id firebaseAnalytics; // @synthesize firebaseAnalytics=_firebaseAnalytics;
- (void).cxx_destruct;
- (void)logPredefinedEventToFirebaseWithEventName:(id)arg1 parameters:(id)arg2;
- (void)logPredefinedEvent:(id)arg1;
- (void)logCustomEvent:(id)arg1;
- (void)logEvent:(id)arg1;
- (id)initWithFirebaseAnalyticsClass:(Class)arg1;
- (id)init;

@end

