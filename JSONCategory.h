//
//  JSONCategory.h
//  https://github.com/semiodesign/json-category
//
//  Created by Arnaud Levy on 01/06/2014.
//

#import <Foundation/Foundation.h>

@interface NSString (JSON)

- (id)objectFromJSONString;

@end

@interface NSArray (JSON)

- (NSString *)JSONString;

@end

@interface NSDictionary (JSON)

+ (NSDictionary *)dictionaryWithContentOfJSONFile:(NSString *)path;
- (NSString *)JSONString;

@end