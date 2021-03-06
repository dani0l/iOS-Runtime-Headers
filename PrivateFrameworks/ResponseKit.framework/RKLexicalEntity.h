/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@class NSString;

@interface RKLexicalEntity : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSString *_language;
    NSString *_lemma;
    NSString *_partOfSpeech;
    NSString *_string;
    } _tokenRange;
    NSString *_tokenType;
}

@property(retain) NSString * language;
@property(retain) NSString * lemma;
@property(retain) NSString * partOfSpeech;
@property(retain) NSString * string;
@property struct _NSRange { unsigned int x1; unsigned int x2; } tokenRange;
@property(retain) NSString * tokenType;
@property(readonly) NSString * word;

- (void).cxx_destruct;
- (id)description;
- (id)language;
- (id)lemma;
- (id)partOfSpeech;
- (void)setLanguage:(id)arg1;
- (void)setLemma:(id)arg1;
- (void)setPartOfSpeech:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setTokenType:(id)arg1;
- (id)string;
- (struct _NSRange { unsigned int x1; unsigned int x2; })tokenRange;
- (id)tokenType;
- (id)word;

@end
