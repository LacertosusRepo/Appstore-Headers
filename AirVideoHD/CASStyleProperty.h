//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CASToken, NSArray, NSDictionary, NSMutableArray, NSString;

@interface CASStyleProperty : NSObject
{
    NSMutableArray *_childStyleProperties;
    CASToken *_nameToken;
    NSArray *_valueTokens;
    NSDictionary *_arguments;
    NSString *_name;
    NSArray *_values;
}

@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSArray *valueTokens; // @synthesize valueTokens=_valueTokens;
@property(retain, nonatomic) CASToken *nameToken; // @synthesize nameToken=_nameToken;
@property(readonly, nonatomic) NSArray *childStyleProperties; // @synthesize childStyleProperties=_childStyleProperties;
- (void).cxx_destruct;
- (void)addChildStyleProperty:(id)arg1;
- (void)resolveExpressions;
- (_Bool)transformValuesToUIFont:(id *)arg1;
- (_Bool)transformValuesToUIImage:(id *)arg1;
- (_Bool)transformValuesToNSString:(id *)arg1;
- (_Bool)transformValuesToUIColor:(id *)arg1;
- (_Bool)transformValuesToUIOffset:(struct UIOffset *)arg1;
- (_Bool)transformValuesToUIEdgeInsets:(struct UIEdgeInsets *)arg1;
- (_Bool)transformValuesToCGRect:(struct CGRect *)arg1;
- (_Bool)transformValuesToCGPoint:(struct CGPoint *)arg1;
- (_Bool)transformValuesToCGSize:(struct CGSize *)arg1;
- (id)consecutiveValuesOfTokenType:(long long)arg1;
- (id)valueOfTokenType:(long long)arg1;
- (id)initWithNameToken:(id)arg1 valueTokens:(id)arg2;

@end

