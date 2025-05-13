"use client"

import { usePathname } from "next/navigation"
export default function NotFound() {
    const pathname = usePathname();
    const productId = pathname.split('/')[2]; // /products/[productId]/reviews/[reviewId]/not-found
    const reviewId = pathname.split('/')[4]; // /products/[productId]/reviews/[reviewId]/not-found
    return (
        <div>
            <h1>Review {reviewId} Not Found for {productId}</h1>
            <p>Sorry, the page you are looking for does not exist.</p>
        </div>
    )
}