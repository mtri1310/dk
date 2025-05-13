import { notFound } from 'next/navigation';

function getRandomInt(count: number) {
    return Math.floor(Math.random() * count) + 1;
}
export default async function ProductReview({ 
    params, 
}: {
        params: Promise<{ productId: string; reviewId: string}>;
}) {
    const random = getRandomInt(2);
    if (random === 1) {
        throw new Error('Error loading review!👉👈');
    }
    const { productId, reviewId } = await params;
    if (parseInt(reviewId) > 1000) {
        notFound(); // 404 page
        // redirect('/products'); // Redirect to home page
    }
    return (
        <h1>Review {reviewId} for Product {productId} </h1>
    )
}
