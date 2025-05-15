import { NextResponse } from "next/server";
import type { NextRequest } from "next/server";

export function middleware(request: NextRequest) {
    // return NextResponse.redirect(new URL("/", request.url));

    //     if (request.nextUrl.pathname === "/profile") {
    //     // return NextResponse.redirect(new URL("/dashboard", request.url));
    //     return NextResponse.rewrite(new URL("/dashboard", request.url));
    // }

    const response = NextResponse.next();
    const themePreference = request.cookies.get("theme");
    if (!themePreference) {
        response.cookies.set("theme", "light");
    }
    response.headers.set("x-custom-header", "hello world");
    return response;
}

// export const config = {
//     matcher: ["/profile", "/dashboard"],
// };